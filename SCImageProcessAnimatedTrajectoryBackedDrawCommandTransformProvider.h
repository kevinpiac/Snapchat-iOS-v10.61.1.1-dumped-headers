//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCImageProcessAnimatedDrawCommandTransformProvider-Protocol.h"

@class NSString, SCVideoTargetTrajectory;

@interface SCImageProcessAnimatedTrajectoryBackedDrawCommandTransformProvider : NSObject <SCImageProcessAnimatedDrawCommandTransformProvider>
{
    struct CGSize _imageSize;
    SCVideoTargetTrajectory *_trajectory;
}

- (void).cxx_destruct;
- (id)galleryTransformAtPresentationTime:(CDStruct_1b6d18a9)arg1;
- (id)initWithImageSize:(struct CGSize)arg1 videoTargetTrajectory:(id)arg2;
- (struct CGSize)originalImageSizeWithOutputSize:(struct CGSize)arg1;
- (struct CGAffineTransform)transformAtPresentationTime:(CDStruct_1b6d18a9)arg1 outputSize:(struct CGSize)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

