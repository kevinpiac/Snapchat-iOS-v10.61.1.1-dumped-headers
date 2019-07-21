//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"
#import "SOJUMessage-Protocol.h"

@class NSString, SOJUSignedPayload;

@protocol SOJUConnectMessage <NSObject, NSCoding, NSCopying, SOJUMessage>
@property(readonly, copy, nonatomic) NSString *appEngineTarget;
@property(readonly, copy, nonatomic) NSString *appVersion;
@property(readonly, copy, nonatomic) SOJUSignedPayload *auth;
@property(readonly, copy, nonatomic) NSString *idValue;
@property(readonly, copy, nonatomic) NSString *platform;
@property(readonly, copy, nonatomic) NSString *type;
@property(readonly, copy, nonatomic) NSString *username;
@property(readonly, copy, nonatomic) NSString *version;
@end

