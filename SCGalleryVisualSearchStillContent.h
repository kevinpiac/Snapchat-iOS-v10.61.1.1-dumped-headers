//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, UIImage;
@protocol SCGallerySnap;

@interface SCGalleryVisualSearchStillContent : NSObject
{
    id <SCGallerySnap> _gallerySnap;
    UIImage *_image;
    NSNumber *_absoluteMediaTimeMs;
    NSNumber *_totalMediaTimeMs;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSNumber *absoluteMediaTimeMs; // @synthesize absoluteMediaTimeMs=_absoluteMediaTimeMs;
@property(readonly, nonatomic) id <SCGallerySnap> gallerySnap; // @synthesize gallerySnap=_gallerySnap;
@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
- (id)initWithGallerySnap:(id)arg1 image:(id)arg2 absoluteMediaTimeMs:(id)arg3 totalMediaTimeMs:(id)arg4;
@property(readonly, nonatomic) NSNumber *totalMediaTimeMs; // @synthesize totalMediaTimeMs=_totalMediaTimeMs;

@end

