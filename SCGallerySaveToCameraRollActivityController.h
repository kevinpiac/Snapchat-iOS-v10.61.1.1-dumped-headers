//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSError, SCGalleryActivityProgressController;

@interface SCGallerySaveToCameraRollActivityController : NSObject
{
    NSArray *_activityItemProviders;
    CDUnknownBlockType _completion;
    SCGalleryActivityProgressController *_activityProgressController;
    NSError *_error;
    _Bool _saving;
    _Bool _succeeded;
    _Bool _cancelled;
    _Bool _finished;
}

- (void).cxx_destruct;
- (void)_complete;
- (void)_saveAtIndex:(unsigned long long)arg1;
- (void)saveWithActivityItemProviders:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

