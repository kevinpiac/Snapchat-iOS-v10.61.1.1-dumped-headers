//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCMessageRecipient-Protocol.h"

@class NSString;

@interface SCMessageAPIRecipient : NSObject <SCMessageRecipient>
{
    NSString *_identifier;
    long long _recipientType;
}

+ (id)recipientListForFriends:(id)arg1;
+ (id)recipientListForFriends:(id)arg1 forGroups:(id)arg2;
+ (id)recipientListForGroups:(id)arg1;
+ (id)singleRecipientWithId:(id)arg1 withType:(long long)arg2;
- (void).cxx_destruct;
- (id)getId;
- (long long)getType;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)initWithIdentifier:(id)arg1 withType:(long long)arg2;
@property(readonly, nonatomic) long long recipientType; // @synthesize recipientType=_recipientType;

@end

