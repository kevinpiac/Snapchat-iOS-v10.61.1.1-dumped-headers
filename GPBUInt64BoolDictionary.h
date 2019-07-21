//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GPBDictionaryInternalsProtocol-Protocol.h"
#import "NSCopying-Protocol.h"

@class GPBMessage, NSMutableDictionary;

@interface GPBUInt64BoolDictionary : NSObject <GPBDictionaryInternalsProtocol, NSCopying>
{
    GPBMessage *_autocreator;
    NSMutableDictionary *_dictionary;
}

+ (id)dictionary;
+ (id)dictionaryWithBool:(_Bool)arg1 forKey:(unsigned long long)arg2;
+ (id)dictionaryWithBools:(const _Bool *)arg1 forKeys:(const unsigned long long *)arg2 count:(unsigned long long)arg3;
+ (id)dictionaryWithCapacity:(unsigned long long)arg1;
+ (id)dictionaryWithDictionary:(id)arg1;
- (void)addEntriesFromDictionary:(id)arg1;
- (unsigned long long)computeSerializedSizeAsField:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) unsigned long long count;
- (void)dealloc;
- (id)description;
- (void)enumerateForTextFormat:(CDUnknownBlockType)arg1;
- (void)enumerateKeysAndBoolsUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)getBool:(_Bool *)arg1 forKey:(unsigned long long)arg2;
- (unsigned long long)hash;
- (id)init;
- (id)initWithBools:(const _Bool *)arg1 forKeys:(const unsigned long long *)arg2 count:(unsigned long long)arg3;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)initWithDictionary:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)removeAll;
- (void)removeBoolForKey:(unsigned long long)arg1;
- (void)setBool:(_Bool)arg1 forKey:(unsigned long long)arg2;
- (void)setGPBGenericValue:(CDUnion_88782d86 *)arg1 forGPBGenericValueKey:(CDUnion_88782d86 *)arg2;
- (void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2;

@end

