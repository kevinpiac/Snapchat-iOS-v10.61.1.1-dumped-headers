//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class SCSNTFNotificationEntityId;

@interface SCSNTFOptInNotification : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasId_p; // @dynamic hasId_p;
@property(retain, nonatomic) SCSNTFNotificationEntityId *id_p; // @dynamic id_p;
@property(nonatomic) int state; // @dynamic state;
@property(nonatomic) long long stateExpireTimestampMsecs; // @dynamic stateExpireTimestampMsecs;
@property(nonatomic) long long stateTimestampMsecs; // @dynamic stateTimestampMsecs;

@end
