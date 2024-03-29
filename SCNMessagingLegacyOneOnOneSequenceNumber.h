//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCNMessagingLegacyOneOnOneSequenceNumber : NSObject
{
    long long _messageSequenceNumber;
    long long _updateSequenceNumber;
    long long _snapTimestamp;
}

+ (id)LegacyOneOnOneSequenceNumberWithMessageSequenceNumber:(long long)arg1 updateSequenceNumber:(long long)arg2 snapTimestamp:(long long)arg3;
- (id)description;
- (id)initWithMessageSequenceNumber:(long long)arg1 updateSequenceNumber:(long long)arg2 snapTimestamp:(long long)arg3;
@property(readonly, nonatomic) long long messageSequenceNumber; // @synthesize messageSequenceNumber=_messageSequenceNumber;
@property(readonly, nonatomic) long long snapTimestamp; // @synthesize snapTimestamp=_snapTimestamp;
@property(readonly, nonatomic) long long updateSequenceNumber; // @synthesize updateSequenceNumber=_updateSequenceNumber;

@end

