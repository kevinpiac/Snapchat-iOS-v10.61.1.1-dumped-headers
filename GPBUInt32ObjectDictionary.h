//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GPBDictionaryInternalsProtocol-Protocol.h"
#import "NSCopying-Protocol.h"

@class GPBMessage, NSMutableDictionary;

@interface GPBUInt32ObjectDictionary : NSObject <GPBDictionaryInternalsProtocol, NSCopying>
{
    GPBMessage *_autocreator;
    NSMutableDictionary *_dictionary;
}

+ (id)dictionary;
+ (id)dictionaryWithCapacity:(unsigned long long)arg1;
+ (id)dictionaryWithDictionary:(id)arg1;
+ (id)dictionaryWithObject:(id)arg1 forKey:(unsigned int)arg2;
+ (id)dictionaryWithObjects:(const id *)arg1 forKeys:(const unsigned int *)arg2 count:(unsigned long long)arg3;
- (void)addEntriesFromDictionary:(id)arg1;
- (unsigned long long)computeSerializedSizeAsField:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) unsigned long long count;
- (void)dealloc;
- (id)deepCopyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)enumerateForTextFormat:(CDUnknownBlockType)arg1;
- (void)enumerateKeysAndObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithObjects:(const id *)arg1 forKeys:(const unsigned int *)arg2 count:(unsigned long long)arg3;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isInitialized;
- (id)objectForKey:(unsigned int)arg1;
- (void)removeAll;
- (void)removeObjectForKey:(unsigned int)arg1;
- (void)setGPBGenericValue:(CDUnion_88782d86 *)arg1 forGPBGenericValueKey:(CDUnion_88782d86 *)arg2;
- (void)setObject:(id)arg1 forKey:(unsigned int)arg2;
- (void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2;

@end

