//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NamedEvent-Protocol.h"

@class NSNumber;

@interface SCANetworkPackets : NSObject <NamedEvent, NSCopying>
{
    NSNumber *wifiPacketsRx;
    NSNumber *wifiPacketsTx;
    NSNumber *wwanPacketsRx;
    NSNumber *wwanPacketsTx;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getEventName;
- (long long)getEventQoS;
- (double)getPerEventSamplingRate;
- (double)getPerUserSamplingRate;
- (long long)getWifiPacketsRx;
- (long long)getWifiPacketsTx;
- (long long)getWwanPacketsRx;
- (long long)getWwanPacketsTx;
- (void)setWifiPacketsRx:(long long)arg1;
- (void)setWifiPacketsTx:(long long)arg1;
- (void)setWwanPacketsRx:(long long)arg1;
- (void)setWwanPacketsTx:(long long)arg1;

@end
