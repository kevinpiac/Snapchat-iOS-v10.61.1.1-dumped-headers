//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCOperaPlaylistItem;

@protocol SCOperaPlaylistItemMediaPreparationController <NSObject>
- (void)prepareMediaForItem:(SCOperaPlaylistItem *)arg1 waitForDownloading:(_Bool)arg2 startWaitingForDownloadCallback:(void (^)(void))arg3 completion:(void (^)(_Bool, _Bool, NSError *, _Bool, unsigned long long))arg4;
- (void)removeMediaForItem:(SCOperaPlaylistItem *)arg1;
@end

