//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCLazy;

@interface SCCognacBaseServices : NSObject
{
    SCLazy *_avatarService;
    SCLazy *_adsPersistenceService;
    SCLazy *_snapchatterService;
    SCLazy *_assetDownloader;
    SCLazy *_imageDownloader;
    SCLazy *_eventLoggingController;
    SCLazy *_localStorageService;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SCLazy *adsPersistenceService; // @synthesize adsPersistenceService=_adsPersistenceService;
@property(readonly, nonatomic) SCLazy *assetDownloader; // @synthesize assetDownloader=_assetDownloader;
@property(readonly, nonatomic) SCLazy *avatarService; // @synthesize avatarService=_avatarService;
@property(readonly, nonatomic) SCLazy *eventLoggingController; // @synthesize eventLoggingController=_eventLoggingController;
@property(readonly, nonatomic) SCLazy *imageDownloader; // @synthesize imageDownloader=_imageDownloader;
- (id)initWithAvatarService:(id)arg1 adsPersistenceService:(id)arg2 snapchatterService:(id)arg3 assetDownloader:(id)arg4 imageDownloader:(id)arg5 eventLoggingController:(id)arg6 localStorageService:(id)arg7;
@property(readonly, nonatomic) SCLazy *localStorageService; // @synthesize localStorageService=_localStorageService;
@property(readonly, nonatomic) SCLazy *snapchatterService; // @synthesize snapchatterService=_snapchatterService;

@end

