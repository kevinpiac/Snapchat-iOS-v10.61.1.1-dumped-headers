//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, SCAdsUserData;

@interface SCAdsUser : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(readonly, nonatomic) int dataOneOfCase; // @dynamic dataOneOfCase;
@property(copy, nonatomic) NSData *encryptedUserData; // @dynamic encryptedUserData;
@property(nonatomic) _Bool isTestGroupQa; // @dynamic isTestGroupQa;
@property(retain, nonatomic) SCAdsUserData *userData; // @dynamic userData;

@end

