//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSpectaclesNetworkResponse.h"

@class VLKAmbaResponse;

@interface SCSpectaclesLagunaNetworkResponse : SCSpectaclesNetworkResponse
{
    VLKAmbaResponse *_ambaResponse;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) VLKAmbaResponse *ambaResponse; // @synthesize ambaResponse=_ambaResponse;
- (id)initWithAmbaResponse:(id)arg1;
- (id)logData;
- (id)logFileList;
- (id)mediaData;
- (struct _NSRange)mediaDataRange;
- (id)mediaList;
- (id)metadata;
- (long long)responseStatus;
- (unsigned long long)serializedSize;
- (unsigned long long)wifiSharingStatus;

@end

