//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface SCProfileMapCardLocationSharingDataModel : NSObject <NSCopying>
{
    unsigned long long _requestButtonState;
    unsigned long long _shareButtonState;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithRequestButtonState:(unsigned long long)arg1 shareButtonState:(unsigned long long)arg2;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) unsigned long long requestButtonState; // @synthesize requestButtonState=_requestButtonState;
@property(readonly, nonatomic) unsigned long long shareButtonState; // @synthesize shareButtonState=_shareButtonState;

@end
