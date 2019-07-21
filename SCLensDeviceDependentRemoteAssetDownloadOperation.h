//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCLensAssetDownloadOperation.h"

@class SCLensContentDataFetcher;
@protocol SCLensRemoteAssetsUrlResolver;

@interface SCLensDeviceDependentRemoteAssetDownloadOperation : SCLensAssetDownloadOperation
{
    id <SCLensRemoteAssetsUrlResolver> _assetUrlResolver;
    SCLensContentDataFetcher *_contentDataFetcher;
}

- (void).cxx_destruct;
- (void)_processDataFetcherResponseContentPath:(id)arg1 resourceType:(long long)arg2 cached:(_Bool)arg3 inputSettings:(id)arg4 error:(id)arg5;
- (void)boostWithSettings:(id)arg1;
- (void)executeWithSettings:(id)arg1;
- (unsigned long long)hash;
- (id)initWithLens:(id)arg1 requestTiming:(long long)arg2 asset:(id)arg3 contentDataFetcher:(id)arg4 assetUrlResolver:(id)arg5;
- (_Bool)isEqual:(id)arg1;

@end
