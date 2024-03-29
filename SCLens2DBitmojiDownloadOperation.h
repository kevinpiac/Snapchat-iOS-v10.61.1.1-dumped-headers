//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCLensAssetDownloadOperation.h"

#import "SCTraceEnabled-Protocol.h"

@class NSString;
@protocol SCBitmojiImageFetcher, SCLensUserProvider;

@interface SCLens2DBitmojiDownloadOperation : SCLensAssetDownloadOperation <SCTraceEnabled>
{
    id <SCBitmojiImageFetcher> _bitmojiImageFetcher;
    id <SCLensUserProvider> _lensUserProvider;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <SCBitmojiImageFetcher> bitmojiImageFetcher; // @synthesize bitmojiImageFetcher=_bitmojiImageFetcher;
- (void)boostWithSettings:(id)arg1;
- (void)executeWithSettings:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithLens:(id)arg1 requestTiming:(long long)arg2 asset:(id)arg3 lensUserProvider:(id)arg4 bitmojiImageFetcher:(id)arg5;
- (_Bool)isEqual:(id)arg1;
@property(retain, nonatomic) id <SCLensUserProvider> lensUserProvider; // @synthesize lensUserProvider=_lensUserProvider;
- (void)processBitmojiImageResponse:(id)arg1 encodedBitmoji:(id)arg2 inputSettings:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

