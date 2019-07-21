//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCLegacyItemDownloader.h"

@class SCCache, SCLazy, SCSessionRequestManager;

@interface SCCognacAssetDownloader : SCLegacyItemDownloader
{
    SCSessionRequestManager *_requestManager;
    SCCache *_assetCache;
    SCLazy *_contentDelivery;
}

- (void).cxx_destruct;
- (id)cache;
- (id)cacheKeyForItem:(id)arg1;
- (id)contentDelivery;
- (id)decryptData:(id)arg1 withItem:(id)arg2;
- (id)downloadPerformer;
- (id)encryptionIVForItem:(id)arg1;
- (id)encryptionKeyForItem:(id)arg1;
- (id)initWithUserSession:(id)arg1 contentDelivery:(id)arg2;
- (_Bool)isItemValid:(id)arg1;
- (id)loadItem:(id)arg1 completion:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3 callbackQueue:(id)arg4;
- (long long)mediaContextTypeForItem:(id)arg1;
- (id)requestContexts:(id)arg1;
- (id)requestForItem:(id)arg1;
- (id)requestManager;
- (id)resultFromData:(id)arg1 withItem:(id)arg2;

@end

