//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface SCNetworkInterfaces : NSObject
{
    NSArray *_interfaces;
}

+ (id)currentNetworkInterfaces;
+ (id)currentWifiSsid;
+ (id)interfaceForAddress:(const struct sockaddr *)arg1;
+ (id)interfacesThatMatch:(CDUnknownBlockType)arg1;
+ (_Bool)isAWDLEnabled;
+ (_Bool)isWwanInterfaceIPv6Only;
- (void).cxx_destruct;
- (id)initWithInterfaces:(id)arg1;
@property(readonly, nonatomic) NSArray *interfaces; // @synthesize interfaces=_interfaces;
- (_Bool)isEqual:(id)arg1;

@end
