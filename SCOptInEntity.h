//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString, SCOptInEntityId;

@interface SCOptInEntity : NSObject <NSCopying, NSCoding>
{
    SCOptInEntityId *_entityId;
    NSString *_displayName;
    unsigned long long _optInState;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, copy, nonatomic) SCOptInEntityId *entityId; // @synthesize entityId=_entityId;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithEntityId:(id)arg1 displayName:(id)arg2 optInState:(unsigned long long)arg3;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) unsigned long long optInState; // @synthesize optInState=_optInState;

@end

