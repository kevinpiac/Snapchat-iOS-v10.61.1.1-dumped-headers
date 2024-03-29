//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVDepthData, AVPortraitEffectsMatte, LSADepthMetadata;

@interface SCImageProcessLensCommandSnap3DMetadata : NSObject
{
    AVDepthData *_depthData;
    LSADepthMetadata *_depthMetadata;
    AVPortraitEffectsMatte *_portraitEffectsMatte;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) AVDepthData *depthData; // @synthesize depthData=_depthData;
@property(readonly, nonatomic) LSADepthMetadata *depthMetadata; // @synthesize depthMetadata=_depthMetadata;
- (id)initWithDepthData:(id)arg1;
- (id)initWithDepthData:(id)arg1 portraitEffectsMatte:(id)arg2;
- (id)initWithDepthMetadata:(id)arg1;
@property(readonly, nonatomic) AVPortraitEffectsMatte *portraitEffectsMatte; // @synthesize portraitEffectsMatte=_portraitEffectsMatte;

@end

