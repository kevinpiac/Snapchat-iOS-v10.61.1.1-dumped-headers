//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSArray, NSString;

@interface SCShareKeyedFriends : NSObject <NSCoding>
{
    NSString *_key;
    NSArray *_friends;
}

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
@property(retain, nonatomic) NSArray *friends; // @synthesize friends=_friends;
- (id)initWithCoder:(id)arg1;
- (id)initWithKey:(id)arg1 friends:(id)arg2;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;

@end

