//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSMutableDictionary, NSMutableOrderedSet;

@interface SCOrderedDictionary : NSObject <NSCoding>
{
    _Bool _shouldPrune;
    NSMutableDictionary *_dict;
    NSMutableOrderedSet *_keys;
    long long _maxSize;
}

- (void).cxx_destruct;
- (id)allKeys;
- (id)allOrderedValues;
- (long long)count;
- (id)description;
@property(retain, nonatomic) NSMutableDictionary *dict; // @synthesize dict=_dict;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithMaxSize:(long long)arg1;
@property(retain, nonatomic) NSMutableOrderedSet *keys; // @synthesize keys=_keys;
@property(nonatomic) long long maxSize; // @synthesize maxSize=_maxSize;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)onAdd:(_Bool)arg1 countBefore:(unsigned long long)arg2;
- (void)onPurge:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
@property(nonatomic) _Bool shouldPrune; // @synthesize shouldPrune=_shouldPrune;
- (_Bool)validate;

@end

