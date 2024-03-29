//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCProgressOverlayViewDelegate-Protocol.h"

@class NSArray, NSError, NSMutableArray, NSString, SCProgressOverlayView, SCUserSession, UIViewController;

@interface SCGalleryPrepareMediaForAssetsOperation : NSObject <SCProgressOverlayViewDelegate>
{
    SCUserSession *_userSession;
    NSArray *_photoAssets;
    UIViewController *_containerViewController;
    _Bool _showsProgressOverlay;
    CDUnknownBlockType _progressBlock;
    CDUnknownBlockType _completionBlock;
    _Bool _longRunning;
    NSMutableArray *_mediaURLs;
    NSMutableArray *_orientations;
    SCProgressOverlayView *_progressOverlayView;
    _Bool _running;
    _Bool _completed;
    _Bool _succeeded;
    _Bool _cancelled;
    NSError *_error;
}

- (void).cxx_destruct;
- (void)_complete;
- (void)_prepareMediaForIndex:(unsigned long long)arg1;
- (void)_updateProgress:(float)arg1;
- (void)cancel;
- (id)initWithPhotoAssets:(id)arg1 containerViewController:(id)arg2 showsProgressOverlay:(_Bool)arg3 userSession:(id)arg4;
- (_Bool)isLongRunning;
- (void)progressOverlayViewDidCancel:(id)arg1;
- (void)runWithProgressBlock:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

