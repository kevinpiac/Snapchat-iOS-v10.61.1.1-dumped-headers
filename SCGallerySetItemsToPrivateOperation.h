//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCProgressOverlayViewDelegate-Protocol.h"

@class NSArray, NSString, SCGalleryPrepareMediaForItemsOperation, SCProgressOverlayView, SCUserSession, UIViewController;

@interface SCGallerySetItemsToPrivateOperation : NSObject <SCProgressOverlayViewDelegate>
{
    SCUserSession *_userSession;
    NSArray *_galleryItems;
    UIViewController *_containerViewController;
    CDUnknownBlockType _completionBlock;
    NSArray *_galleryEntries;
    NSArray *_photoAssets;
    NSArray *_photoAssetMediaURLs;
    NSArray *_photoAssetOrientations;
    SCGalleryPrepareMediaForItemsOperation *_prepareMediaOperation;
    SCProgressOverlayView *_progressOverlayView;
    _Bool _preparingMedia;
    _Bool _running;
    _Bool _completed;
    _Bool _succeeded;
    _Bool _cancelled;
    NSString *_context;
}

- (void).cxx_destruct;
- (void)_complete;
- (void)_prepareMedia;
- (void)_setGalleryEntriesToPrivate;
- (void)_setPhotoAssetToPrivateAtIndex:(unsigned long long)arg1;
- (void)_setPhotoAssetsToPrivate;
- (id)initWithUserSession:(id)arg1 galleryItems:(id)arg2 containerViewController:(id)arg3 context:(id)arg4;
- (void)progressOverlayViewDidCancel:(id)arg1;
- (void)runWithCompletionBlock:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

