//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class SCVenueStickerView;

@interface SCStickerVenuePickerCell : UITableViewCell
{
    SCVenueStickerView *_stickerView;
    struct UIEdgeInsets _stickerInsets;
}

+ (id)reuseIdentifier;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
@property(nonatomic) struct UIEdgeInsets stickerInsets; // @synthesize stickerInsets=_stickerInsets;
@property(retain, nonatomic) SCVenueStickerView *stickerView; // @synthesize stickerView=_stickerView;
- (void)setVenue:(id)arg1;

@end

