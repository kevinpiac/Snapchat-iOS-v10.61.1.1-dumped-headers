//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSMutableDictionary;

@interface SCFindFriendsCache : NSObject <NSCoding>
{
    NSMutableDictionary *_cache;
}

+ (id)oldestNumbersFromExpiredCache:(id)arg1 withLimit:(long long)arg2;
- (void).cxx_destruct;
- (id)addressBookEditionDateForPhoneNumber:(id)arg1;
- (id)calculateDifferenceFromNumberList:(id)arg1 isHashed:(_Bool)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)getExpiredCache:(double)arg1;
- (_Bool)hasNameUpdatedSinceCached:(id)arg1 forNumber:(id)arg2 isHashed:(_Bool)arg3;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEmpty;
- (id)nameForHashedPhone:(id)arg1;
- (void)removeCachesForNumberList:(id)arg1 isHashed:(_Bool)arg2;
- (void)setContactToCache:(id)arg1 forHashedNumber:(id)arg2;
- (void)updateCacheForContacts:(id)arg1 timestamp:(id)arg2 newContactsNumbers:(id)arg3;

@end

