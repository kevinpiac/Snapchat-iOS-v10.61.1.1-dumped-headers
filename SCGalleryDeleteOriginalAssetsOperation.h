//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, SCUserSession;

@interface SCGalleryDeleteOriginalAssetsOperation : NSObject
{
    SCUserSession *_userSession;
    NSArray *_photoAssets;
    _Bool _running;
    CDUnknownBlockType _completionBlock;
    _Bool _completed;
    _Bool _succeeded;
}

- (void).cxx_destruct;
- (void)_complete;
- (void)dealloc;
- (id)initWithPhotoAssets:(id)arg1 userSession:(id)arg2;
- (void)runWithCompletionBlock:(CDUnknownBlockType)arg1;

@end
