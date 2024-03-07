"use strict";class VoiceTranscriptionWorklet extends AudioWorkletProcessor{constructor(s){super(),this.e=s,this.a=void 0,this.b=!1,this.c=[],this.d=void 0,this.f()}f(){this.port.onmessage=s=>{switch(s.data){case"vscode:startVoiceTranscription":{this.d=s.ports[0],this.d.onmessage=t=>{this.b||typeof t.data=="string"&&this.port.postMessage(t.data)},this.d.start();break}case"vscode:stopVoiceTranscription":{this.b=!0,this.d?.close(),this.d=void 0;break}}}}process(s){this.a===void 0&&(this.a=Date.now());const t=s[0][0];if(!(t instanceof Float32Array))return!this.b;if(this.c.push(t.slice(0)),Date.now()-this.a>this.e.processorOptions.bufferTimespan&&this.d){const i=this.h(this.c);this.c=[],this.d.postMessage(this.g(i)?new Float32Array(0):i),this.a=Date.now()}return!this.b}g(s){let t=0;for(let e=0;e<s.length;e++)t+=s[e]*s[e];return Math.sqrt(t/s.length)<this.e.processorOptions.vadThreshold}h(s){const t=new Float32Array(s.reduce((e,r)=>e+r.length,0));let i=0;for(const e of s)t.set(e,i),i+=e.length;return t}}registerProcessor("voice-transcription-worklet",VoiceTranscriptionWorklet);

//# sourceMappingURL=https://ticino.blob.core.windows.net/sourcemaps/f1b07bd25dfad64b0167beb15359ae573aecd2cc/core/vs/workbench/services/voiceRecognition/electron-sandbox/voiceTranscriptionWorklet.js.map
