//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCOrderedDictionary.h"

#import "NSCoding-Protocol.h"

@interface SCAccessOrderedDictionary : SCOrderedDictionary <NSCoding>
{
}

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMaxSize:(long long)arg1;
- (id)objectForKey:(id)arg1 updateOrder:(_Bool)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)onOrderUpdated;

@end

