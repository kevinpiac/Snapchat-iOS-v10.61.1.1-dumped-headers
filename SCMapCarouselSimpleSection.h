//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCMapCarouselSection-Protocol.h"

@class NSArray;
@protocol SCMapCarouselSectionDelegate;

@interface SCMapCarouselSimpleSection : NSObject <SCMapCarouselSection>
{
    id <SCMapCarouselSectionDelegate> _delegate;
    NSArray *_rows;
}

+ (id)sectionWithRows:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak id <SCMapCarouselSectionDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSArray *rows; // @synthesize rows=_rows;

@end

