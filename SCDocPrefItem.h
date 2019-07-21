//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCDocObject.h"

#import "NSCopying-Protocol.h"

@class NSData, NSString;

@interface SCDocPrefItem : SCDocObject <NSCopying>
{
    BOOL _valType;
    BOOL _valByte;
    float _valFloat;
    NSString *_key;
    NSString *_nameGroup;
    long long _valInteger;
    unsigned long long _valUnsignedInteger;
    double _valDouble;
    NSData *_valFastCoded;
}

+ (id)immutableObjectParse:(const void *)arg1 bufferSize:(unsigned long long)arg2;
+ (struct SCDocObjectClassFunctionPointer)objectClassFunctionPointer;
+ (const char *)table;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithKey:(id)arg1 nameGroup:(id)arg2 valType:(BOOL)arg3 valByte:(BOOL)arg4 valInteger:(long long)arg5 valUnsignedInteger:(unsigned long long)arg6 valFloat:(float)arg7 valDouble:(double)arg8 valFastCoded:(id)arg9;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(readonly, copy, nonatomic) NSString *nameGroup; // @synthesize nameGroup=_nameGroup;
@property(readonly, nonatomic) BOOL valByte; // @synthesize valByte=_valByte;
@property(readonly, nonatomic) double valDouble; // @synthesize valDouble=_valDouble;
@property(readonly, copy, nonatomic) NSData *valFastCoded; // @synthesize valFastCoded=_valFastCoded;
@property(readonly, nonatomic) float valFloat; // @synthesize valFloat=_valFloat;
@property(readonly, nonatomic) long long valInteger; // @synthesize valInteger=_valInteger;
@property(readonly, nonatomic) BOOL valType; // @synthesize valType=_valType;
@property(readonly, nonatomic) unsigned long long valUnsignedInteger; // @synthesize valUnsignedInteger=_valUnsignedInteger;

@end

