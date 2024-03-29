//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CLLocation, NSData, SCSpectaclesContent, SOJUGallerySnapOverlay;
@protocol SCGallerySnap;

@interface SCGalleryDayStorySnapPlaceholder : NSObject
{
    SCSpectaclesContent *_lagunaContent;
    CLLocation *_location;
    SOJUGallerySnapOverlay *_overlay;
    id <SCGallerySnap> _creationSnap;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSData *IV;
@property(readonly, copy, nonatomic) id <SCGallerySnap> creationSnap; // @synthesize creationSnap=_creationSnap;
@property(readonly, copy, nonatomic) NSData *data;
- (id)initWithCreationSnap:(id)arg1 lagunaContent:(id)arg2 location:(id)arg3 overlay:(id)arg4;
@property(readonly, copy, nonatomic) NSData *key;
- (id)lagunaContent;
@property(readonly, copy, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(readonly, copy, nonatomic) SOJUGallerySnapOverlay *overlay; // @synthesize overlay=_overlay;

@end

