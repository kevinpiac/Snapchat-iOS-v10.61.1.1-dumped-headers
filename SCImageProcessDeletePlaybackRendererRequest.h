//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCImageProcessRequest-Protocol.h"

@class NSString, SCImageProcessPlaybackRenderer;

@interface SCImageProcessDeletePlaybackRendererRequest : NSObject <SCImageProcessRequest>
{
    SCImageProcessPlaybackRenderer *_renderer;
    unsigned long long _status;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool GPURequired;
- (void)cancel;
- (id)initWithRenderer:(id)arg1;
- (_Bool)runProgramsWithContext:(id)arg1 GPUAvailable:(_Bool)arg2 error:(id *)arg3;
@property(readonly, nonatomic) unsigned long long status; // @synthesize status=_status;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

