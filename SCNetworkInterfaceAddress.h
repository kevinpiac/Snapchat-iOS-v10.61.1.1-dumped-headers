//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SCNetworkInterfaceAddress : NSObject
{
    NSString *_name;
    struct sockaddr *_address;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) struct sockaddr *address; // @synthesize address=_address;
- (void)dealloc;
- (_Bool)hasRoutableAddress;
- (id)initWithName:(char *)arg1 address:(const struct sockaddr *)arg2;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isIPv6;
- (_Bool)isWifi;
- (_Bool)isWwan;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;

@end
