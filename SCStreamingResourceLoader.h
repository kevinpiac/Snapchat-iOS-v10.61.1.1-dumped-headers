//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCStreamingResourceLoaderDelegateCompletionHandler-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString, SCObservable, SCPublishSubject, SCQueuePerformer, SCSessionRequestManager;
@protocol SCStreamingResponseCaching;

@interface SCStreamingResourceLoader : NSObject <SCStreamingResourceLoaderDelegateCompletionHandler>
{
    NSMutableDictionary *_resourceLoaderMap;
    NSMutableArray *_assetList;
    SCQueuePerformer *_assetListPerformer;
    SCSessionRequestManager *_requestManager;
    id <SCStreamingResponseCaching> _cache;
    SCPublishSubject *_resourceLoaderErrorObservable;
}

- (void).cxx_destruct;
- (id)assetWithURLProvider:(id)arg1;
@property(readonly, nonatomic) id <SCStreamingResponseCaching> cache; // @synthesize cache=_cache;
- (id)initWithCache:(id)arg1 requestManager:(id)arg2;
- (void)removeAll;
- (void)removeAssetWithURL:(id)arg1;
- (void)requestLoaderDelegateDidFinish:(id)arg1 urlProvider:(id)arg2 withError:(id)arg3;
@property(readonly, nonatomic) SCObservable *resourceLoaderErrorObservable; // @synthesize resourceLoaderErrorObservable=_resourceLoaderErrorObservable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

