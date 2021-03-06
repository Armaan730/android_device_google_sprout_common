/*
 * Copyright (C) 2017 The LineageOS Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <stdint.h>
#include <media/IMediaSource.h>
#include <media/stagefright/MediaSource.h>

extern "C"{
    extern void _ZNK7android11MediaSource11ReadOptions9getSeekToEPxPNS1_8SeekModeE(void * obj, int64_t time_us, android::MediaSource::ReadOptions::SeekMode mode) {
        android::IMediaSource::ReadOptions *rop = static_cast<android::IMediaSource::ReadOptions *>(obj);
        rop->setSeekTo(time_us, mode);
    }

    extern bool _ZNK7android11MediaSource11ReadOptions14getNonBlockingEv(void * obj) {
        android::IMediaSource::ReadOptions *rop = static_cast<android::IMediaSource::ReadOptions *>(obj);
        return rop->getNonBlocking();
    }

    int64_t _ZNK7android11MediaSource11ReadOptions9getLateByEv(android::IMediaSource::ReadOptions *readOptions) {
        int64_t res = readOptions->getLateBy();
        return res;
    }
}

extern "C" {
// int _ZN7android16MediaBufferGroupC1Em(unsigned long);
int _ZN7android16MediaBufferGroupC1Ej();
int _ZN7android16MediaBufferGroupC1Ev() {
    // return _ZN7android16MediaBufferGroupC1Em(0);
    return _ZN7android16MediaBufferGroupC1Ej();
}
void _ZN7android14SurfaceControl8setLayerEj(uint32_t);

void _ZN7android14SurfaceControl8setLayerEi(int32_t layer){
        _ZN7android14SurfaceControl8setLayerEj(static_cast<uint32_t>(layer));
    }

}

