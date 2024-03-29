//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCAudioProcessorProcessingWrapper-Protocol.h"

@class NSString;
@protocol SCPerforming;

@interface SCLookseryAudioProcessingWrapper : NSObject <SCAudioProcessorProcessingWrapper>
{
    struct AudioChainMain *_audioChain;
    NSString *_currentAudioFilterStyleId;
    id <SCPerforming> _audioChainPerformer;
}

- (void).cxx_destruct;
- (void)_loadPresetFromPath:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_setDenoiseParameters;
- (void)_updateParametersWithCurrentAudioFilterStyleId;
- (void)dealloc;
- (id)init;
- (int)processBufferList:(struct AudioBufferList *)arg1;
- (void)setParametersWithAudioFilterStyleId:(id)arg1;
- (void)setupWithFormat:(const struct AudioStreamBasicDescription *)arg1;

@end

