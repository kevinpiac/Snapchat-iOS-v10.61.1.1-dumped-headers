//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCADiscoverSnapScreenshotBase.h"

@class NSString;

@interface SCADiscoverSnapLongformScreenshot : SCADiscoverSnapScreenshotBase
{
    long long longformType;
    NSString *dsnapId;
    NSString *videoPartnerId;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getDsnapId;
- (id)getEventName;
- (long long)getEventQoS;
- (long long)getLongformType;
- (double)getPerUserSamplingRate;
- (id)getVideoPartnerId;
- (id)init;
- (void)setDsnapId:(id)arg1;
- (void)setLongformType:(long long)arg1;
- (void)setVideoPartnerId:(id)arg1;

@end

