//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCOperaLayer-Protocol.h"

@class NSDictionary, NSNumber, NSString, SCOperaPage;

@interface SCOperaCardInteractionLayer : NSObject <SCOperaLayer>
{
    NSString *_appIconImageKey;
    NSString *_customUserAgent;
    NSString *_subtitle;
    NSString *_title;
    NSString *_uri;
    SCOperaPage *_page;
    NSNumber *_cardDeepLinkDelaySeconds;
    long long _deepLinkFallbackType;
    NSDictionary *_deepLinkAppInstallFallbackStoreParams;
    double _liveAreaPercentXInset;
    double _liveAreaPercentYInset;
}

+ (id)layerWithProperties:(id)arg1 page:(id)arg2;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *appIconImageKey; // @synthesize appIconImageKey=_appIconImageKey;
@property(readonly, nonatomic) NSNumber *cardDeepLinkDelaySeconds; // @synthesize cardDeepLinkDelaySeconds=_cardDeepLinkDelaySeconds;
@property(readonly, copy, nonatomic) NSString *customUserAgent; // @synthesize customUserAgent=_customUserAgent;
@property(readonly, copy, nonatomic) NSDictionary *deepLinkAppInstallFallbackStoreParams; // @synthesize deepLinkAppInstallFallbackStoreParams=_deepLinkAppInstallFallbackStoreParams;
@property(readonly, nonatomic) long long deepLinkFallbackType; // @synthesize deepLinkFallbackType=_deepLinkFallbackType;
- (id)initWithProperties:(id)arg1 page:(id)arg2;
- (_Bool)isEqual:(id)arg1;
@property(nonatomic) double liveAreaPercentXInset; // @synthesize liveAreaPercentXInset=_liveAreaPercentXInset;
@property(nonatomic) double liveAreaPercentYInset; // @synthesize liveAreaPercentYInset=_liveAreaPercentYInset;
@property(nonatomic) __weak SCOperaPage *page; // @synthesize page=_page;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (unsigned long long)type;
@property(readonly, copy, nonatomic) NSString *uri; // @synthesize uri=_uri;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

