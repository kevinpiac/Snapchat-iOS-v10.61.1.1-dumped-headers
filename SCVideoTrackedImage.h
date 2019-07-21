//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCVideoTargetTrajectory, SOJUGalleryTransform, UIImage;

@interface SCVideoTrackedImage : NSObject
{
    UIImage *_image;
    SCVideoTargetTrajectory *_trajectory;
    SOJUGalleryTransform *_staticTransform;
    struct CGSize _normalizedSize;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
- (id)initWithFullSizeImage:(id)arg1;
- (id)initWithNormalizedSize:(struct CGSize)arg1 image:(id)arg2 staticTransform:(id)arg3;
- (id)initWithNormalizedSize:(struct CGSize)arg1 image:(id)arg2 targetTrajectory:(id)arg3;
- (id)initWithVideoTrackedImageState:(id)arg1;
@property(readonly, nonatomic) struct CGSize normalizedSize; // @synthesize normalizedSize=_normalizedSize;
@property(readonly, nonatomic) SOJUGalleryTransform *staticTransform; // @synthesize staticTransform=_staticTransform;
- (id)toVideoTrackedImageState;
@property(readonly, nonatomic) SCVideoTargetTrajectory *trajectory; // @synthesize trajectory=_trajectory;

@end
