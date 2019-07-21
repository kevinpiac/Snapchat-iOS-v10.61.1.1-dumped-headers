//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCDocObject.h"

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCSnapchattersContactNonSnapchatter : SCDocObject <NSCopying>
{
    NSString *_phoneNumber;
    NSString *_displayName;
    double _lastInteractionTimestamp;
}

+ (id)immutableObjectParse:(const void *)arg1 bufferSize:(unsigned long long)arg2;
+ (struct SCDocObjectClassFunctionPointer)objectClassFunctionPointer;
+ (const char *)table;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (unsigned long long)hash;
- (id)initWithPhoneNumber:(id)arg1 displayName:(id)arg2 lastInteractionTimestamp:(double)arg3;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) double lastInteractionTimestamp; // @synthesize lastInteractionTimestamp=_lastInteractionTimestamp;
@property(readonly, copy, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;

@end
