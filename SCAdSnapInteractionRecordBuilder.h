//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SCAdSnapInteractionRecordBuilder : NSObject
{
    long long _attachmentType;
    long long _collectionItemPositionIndex;
    double _longformTimeViewedInMillis;
    _Bool _remoteWebviewLoadedOnEntry;
    _Bool _remoteWebviewLoadedOnExit;
    double _remoteWebviewVisiblePageLoadTimeSeconds;
    _Bool _deepLinkFallBackToWebview;
    _Bool _deepLinkFallBackToAppStore;
    _Bool _deepLinkFromCard;
    NSString *_deepLinkUri;
}

+ (id)adSnapInteractionRecord;
+ (id)adSnapInteractionRecordFromExistingAdSnapInteractionRecord:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)withAttachmentType:(long long)arg1;
- (id)withCollectionItemPositionIndex:(long long)arg1;
- (id)withDeepLinkFallBackToAppStore:(_Bool)arg1;
- (id)withDeepLinkFallBackToWebview:(_Bool)arg1;
- (id)withDeepLinkFromCard:(_Bool)arg1;
- (id)withDeepLinkUri:(id)arg1;
- (id)withLongformTimeViewedInMillis:(double)arg1;
- (id)withRemoteWebviewLoadedOnEntry:(_Bool)arg1;
- (id)withRemoteWebviewLoadedOnExit:(_Bool)arg1;
- (id)withRemoteWebviewVisiblePageLoadTimeSeconds:(double)arg1;

@end

