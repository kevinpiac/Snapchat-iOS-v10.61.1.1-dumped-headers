//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TCV3TypingParticipant : NSObject
{
    NSString *_username;
    long long _typingState;
}

+ (id)TypingParticipantWithUsername:(id)arg1 typingState:(long long)arg2;
- (void).cxx_destruct;
- (id)description;
- (id)initWithUsername:(id)arg1 typingState:(long long)arg2;
@property(readonly, nonatomic) long long typingState; // @synthesize typingState=_typingState;
@property(readonly, nonatomic) NSString *username; // @synthesize username=_username;

@end

