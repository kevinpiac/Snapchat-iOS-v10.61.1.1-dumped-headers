//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface SCCognacAppPlayersLimits : NSObject <NSCopying>
{
    unsigned long long _minPlayersNum;
    unsigned long long _maxPlayersNum;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithMinPlayersNum:(unsigned long long)arg1 maxPlayersNum:(unsigned long long)arg2;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) unsigned long long maxPlayersNum; // @synthesize maxPlayersNum=_maxPlayersNum;
@property(readonly, nonatomic) unsigned long long minPlayersNum; // @synthesize minPlayersNum=_minPlayersNum;

@end

