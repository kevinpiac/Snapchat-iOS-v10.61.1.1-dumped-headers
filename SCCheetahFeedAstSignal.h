//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;

@interface SCCheetahFeedAstSignal : NSObject <NSCopying, NSCoding>
{
    float _value;
    NSString *_name;
    NSString *_signalDescription;
    long long _signalType;
    NSString *_version;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 signalDescription:(id)arg2 signalType:(long long)arg3 version:(id)arg4 value:(float)arg5;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *signalDescription; // @synthesize signalDescription=_signalDescription;
@property(readonly, nonatomic) long long signalType; // @synthesize signalType=_signalType;
@property(readonly, nonatomic) float value; // @synthesize value=_value;
@property(readonly, copy, nonatomic) NSString *version; // @synthesize version=_version;

@end
