//
//  DeoDao.h
//  DeDaoTweak
//
//  Created by 杨志超 on 2017/9/19.
//
//

#import <UIKit/UIKit.h>

@interface DataServiceV2 : NSObject

+ (id)GetInstance;
- (void)FM_GetColumnArticlesByColumnId:(id)arg1 page:(id)arg2 pageSize:(id)arg3 order:(id)arg4 callBack:(void (^)(long long, NSDictionary *, BOOL))arg5;

@end

@interface FMSubscribeDetailEntity : NSObject

@property(retain, nonatomic) NSNumber *subscribe_id; // @synthesize subscribe_id=_subscribe_id;

@end

@interface SubscribeSettingsViewControllerV2 : UIViewController

@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
@property(retain, nonatomic) FMSubscribeDetailEntity *detailData; // @synthesize detailData=_detailData;
@property(retain, nonatomic) NSMutableArray *iconImageArray; // @synthesize iconImageArray=_iconImageArray;

@end

