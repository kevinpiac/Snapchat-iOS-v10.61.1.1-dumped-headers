//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSString;

@interface SCSearchFormsItemGroup : NSObject <NSCopying>
{
    NSString *_groupDisplayName;
    long long _collapsibleMode;
    NSArray *_items;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long collapsibleMode; // @synthesize collapsibleMode=_collapsibleMode;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSString *groupDisplayName; // @synthesize groupDisplayName=_groupDisplayName;
- (unsigned long long)hash;
- (id)initWithGroupDisplayName:(id)arg1 collapsibleMode:(long long)arg2 items:(id)arg3;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *items; // @synthesize items=_items;

@end

