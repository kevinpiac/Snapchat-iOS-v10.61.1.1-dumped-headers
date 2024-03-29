//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, NSTimer;

@interface SCChatMessage : NSObject
{
    NSString *_authMac;
    NSString *_authPayload;
    NSString *__id;
    NSString *_type;
    NSString *_chatId;
    NSDictionary *_json;
    unsigned long long _sequence;
    NSTimer *_timeoutTimer;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *_id; // @synthesize _id=__id;
- (void)addEntriesFromDictionary:(id)arg1;
@property(copy, nonatomic) NSString *authMac; // @synthesize authMac=_authMac;
@property(copy, nonatomic) NSString *authPayload; // @synthesize authPayload=_authPayload;
- (_Bool)canSupersedePriorMessages;
@property(copy, nonatomic) NSString *chatId; // @synthesize chatId=_chatId;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)expectsACKMessage;
- (id)initWithCoder:(id)arg1;
- (id)initWithMessageDictionary:(id)arg1;
- (_Bool)isPresenceMessage;
@property(copy, nonatomic) NSDictionary *json; // @synthesize json=_json;
- (id)sanitizedJSON;
@property(readonly, copy, nonatomic) NSString *sender;
@property(nonatomic) unsigned long long sequence; // @synthesize sequence=_sequence;
@property(retain, nonatomic) NSTimer *timeoutTimer; // @synthesize timeoutTimer=_timeoutTimer;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
- (void)setupPropertiesFromJson;
- (_Bool)shouldRetryFailed;
- (_Bool)shouldShowNetworkActivity;
- (_Bool)supersedesPriorMessage:(id)arg1;
- (_Bool)supersedesPriorMessageJson:(id)arg1;
- (long long)typeEnum;

@end

