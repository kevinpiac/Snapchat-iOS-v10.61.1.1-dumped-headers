//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAAdWebViewLoadBase.h"

@class NSNumber, NSString;

@interface SCAAdWebViewDPALoad : SCAAdWebViewLoadBase
{
    NSNumber *cookieSizeInBytes;
    NSNumber *cookieParseTimeMs;
    NSNumber *totalLoadTimeMs;
    NSNumber *metadataSizeInBytes;
    NSString *assetSizeInBytes;
    NSString *assetTypes;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getAssetSizeInBytes;
- (id)getAssetTypes;
- (long long)getCookieParseTimeMs;
- (long long)getCookieSizeInBytes;
- (id)getEventName;
- (long long)getEventQoS;
- (long long)getMetadataSizeInBytes;
- (double)getPerUserSamplingRate;
- (long long)getTotalLoadTimeMs;
- (void)setAssetSizeInBytes:(id)arg1;
- (void)setAssetTypes:(id)arg1;
- (void)setCookieParseTimeMs:(long long)arg1;
- (void)setCookieSizeInBytes:(long long)arg1;
- (void)setMetadataSizeInBytes:(long long)arg1;
- (void)setTotalLoadTimeMs:(long long)arg1;

@end

