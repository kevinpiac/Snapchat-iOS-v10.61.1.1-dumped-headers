//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSNumber, NSString, SOJUStrRect;

@protocol SOJUSponsoredSlugPosAndText <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSString *alignment;
@property(readonly, copy, nonatomic) NSString *hmargin;
@property(readonly, copy, nonatomic) NSString *longformText;
@property(readonly, copy, nonatomic) NSNumber *longformTimeBeforeFadeout;
@property(readonly, copy, nonatomic) NSString *position;
@property(readonly, copy, nonatomic) NSString *sponsoredChannelText;
@property(readonly, copy, nonatomic) NSString *sponsoredText;
@property(readonly, copy, nonatomic) NSString *text;
@property(readonly, copy, nonatomic) NSNumber *timeBeforeFadeout;
@property(readonly, copy, nonatomic) SOJUStrRect *viewRect;
@property(readonly, copy, nonatomic) NSString *vmargin;
@end

