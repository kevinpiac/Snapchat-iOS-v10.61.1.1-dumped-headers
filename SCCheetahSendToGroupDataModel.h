//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCCheetahSendToGroupDataModel : NSObject <NSCopying>
{
    NSString *_groupId;
    NSString *_groupTitle;
    NSString *_groupDescription;
    NSString *_sectionType;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSString *groupDescription; // @synthesize groupDescription=_groupDescription;
@property(readonly, copy, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
@property(readonly, copy, nonatomic) NSString *groupTitle; // @synthesize groupTitle=_groupTitle;
- (unsigned long long)hash;
- (id)initWithGroupId:(id)arg1 groupTitle:(id)arg2 groupDescription:(id)arg3 sectionType:(id)arg4;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *sectionType; // @synthesize sectionType=_sectionType;

@end

