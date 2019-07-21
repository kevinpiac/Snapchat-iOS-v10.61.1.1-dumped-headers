//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCLensAssetDownloadOperation.h"

#import "SCTraceEnabled-Protocol.h"

@class NSString, SCLensContentDataFetcher, SCLensSecurity;

@interface SCLensRemoteAssetDownloadOperation : SCLensAssetDownloadOperation <SCTraceEnabled>
{
    SCLensContentDataFetcher *_contentDataFetcher;
    SCLensSecurity *_signatureValidator;
}

- (void).cxx_destruct;
- (id)assetResource;
- (void)boostWithSettings:(id)arg1;
@property(retain, nonatomic) SCLensContentDataFetcher *contentDataFetcher; // @synthesize contentDataFetcher=_contentDataFetcher;
- (void)executeWithSettings:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithLens:(id)arg1 requestTiming:(long long)arg2 asset:(id)arg3 contentDataFetcher:(id)arg4 signatureValidator:(id)arg5;
- (_Bool)isEqual:(id)arg1;
- (void)processContentVerificationError:(id)arg1 withChecksum:(id)arg2;
- (void)processDataFetcherResponseContentPath:(id)arg1 resourceType:(long long)arg2 cached:(_Bool)arg3 inputSettings:(id)arg4 error:(id)arg5;
@property(retain, nonatomic) SCLensSecurity *signatureValidator; // @synthesize signatureValidator=_signatureValidator;
- (void)verifyContentAtPath:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)verifySignatureForContentAtPath:(id)arg1 resourceType:(long long)arg2 completion:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

