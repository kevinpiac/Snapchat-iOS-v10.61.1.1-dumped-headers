//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCMetalModule.h"

#import "SCMetalRenderCommand-Protocol.h"

@class NSString;

@interface SCExposureAdjustMetalRenderCommand : SCMetalModule <SCMetalRenderCommand>
{
}

@property(readonly, copy) NSString *description;
- (id)encodeMetalCommand:(id)arg1 pipelineState:(id)arg2 textureResource:(id)arg3;
@property(readonly, nonatomic) NSString *functionName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

